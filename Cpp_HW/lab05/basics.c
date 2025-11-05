# include <stdio.h>

int main(void) {
    /* 1. 声明 (Declaration) — Declare an array */
    // declaring an array of 10 ints.
    int arr1[10];  // 元素是随机值（未定义）



    /* 2. 初始化 (Initialization) — Initialize arrays */
    // Example 1: specify size + initialize all elements
    int init1[5] = {1, 2, 3, 4, 5};

    // Example 2: omit size, compiler infers
    int init2[] = {10, 20, 30};

    // Example 3: specify size, partial initialization, remainder set to zero
    int init3[5] = {100, 200};  // init3[0]=100, init3[1]=200, init3[2..4]=0
    int a[5] = {1, 2};    // a = {1,2,0,0,0}
    char s[10] = "hi";   // 等同于 {'h','i','\0',0,0,0,0,0,0,0}

    // Example 4: zero initialization
    int arr1[5] = {};   // 全部初始化为0（C标准扩展，部分编译器支持）
    int arr2[5] = {0};  // 全部初始化为0（标准写法，推荐 ✅）



    /* 3. 访问元素 (Accessing elements) — Access / modify */
    // access element index 0.
    init1[0] = 42;
    printf("init1[0] = %d\n", init1[0]);



    /* 4. 遍历 (Traversal) — Loop through array */
    // compute length then loop print.
    int n2 = sizeof(init2) / sizeof(init2[0]);
    printf("init2 contains: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", init2[i]);
    }
    printf("\n");




    /* 5. 数组与指针关系 (Arrays vs Pointers) */
    // 数组名一旦进入表达式，就会自动退化为 “指向第一个元素的指针, 数组名 s 用于 sizeof 和 &，不退化。
    printf("sizeof(s) = %zu\n", sizeof(s));  // 6 = 5 chars + '\0'
    printf("&s = %p, s = %p\n", (void*)&s, (void*)s);

    // 中文：用指针算术访问元素。English: pointer arithmetic to access element.
    printf("*(init2 + 2) = %d\n", *(init2 + 2));   // 等同于 init2[2]




    /* 6. 传递数组给函数 (Passing array to function) */
    // 中文：传递数组时实际上传的是指针，函数不能自动知道元素个数, 函数里的数组与原数组是共享空间, 并不会真的创建一个数组。English: passing array passes pointer; size not known.
    void printArray(int *a, int size);
    printArray(init3, 5);

    // 一般形式就传指针, 但是有一个语法糖，我们也可以“形式上”直接传需要的数组C, 编译器会自动把它改写为指针
    int max(int b[10])  //等价于 int *b, 教学中常用，提示长度
    int max(int b[])  // 等价于 int *b
    int max(int *b)  // 最常见的通用写法






    /* 7. 多维数组 (Multidimensional arrays) */
    // 中文：声明一个 3 行 4 列的二维数组。English: declare a 3×4 2D array.
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    // 遍历二维数组
    printf("matrix elements:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }



    /* 9. 字符数组用字符串字面量初始化（Special: char array + string literal）／Char‐array initialized by string literal */
    char s[] = "hello";  // 中文：自动包含终结 '\0'。English: includes the terminating '\0'.
    printf("s = \"%s\"\n", s);
    printf("sizeof(s) = %zu bytes\n", sizeof(s));  // 英文：size includes '\0'
    printf("&s = %p, s = %p\n", (void*)&s, (void*)s);

    // 只有字符串数组可以直接printf
    char s[] = "hello";   // => {'h','e','l','l','o','\0'}  
    printf("%s\n", s);    // ✅ 输出 hello  
    int nums[] = {1, 2, 3, 4};
    printf("%s\n", nums);   // ❌ 错误：类型不匹配，甚至可能崩溃
    char s[] = {'h','e','l','l','o'};  // ❌ 没有 '\0'
    printf("%s\n", s);  // 未定义行为, 只能老实遍历

    // 输入字符串
    char name[20];
    printf("请输入你的名字：");
    scanf("%19s", name);   // 不需要 &，因为 name 会退化为 char*. 且最多19字符+1个'\0'
    //在所有 scanf 格式输入中，只有字符串输入（%s、%c[]）时，参数不用加 &。

    printf("你好，%s！\n", name);

    // 字符串常量不能写入, 只能用数组村字符串 
    char *str = "hello";  // str 指向常量区的 "hello"
    scanf("%s", str);     // ❌ 错误：不能往常量区写数据！


    /* 10. 指针算术区别 */
    printf("&s + 1 = %p\n", (void*)(&s + 1));  // 表示整个数组的地址 + 1
    printf("s + 1 = %p\n", (void*)(s + 1));  // 表示第一个元素的地址 + 1
    // 原因是因为类型不同. 指针的类型决定它的算术意义，而不是它的数值。
    // eg. int * 的 “+1” → 向后移动一个 int 的大小。
	// eg. int (*)[3] 的 “+1” → 向后移动一个 “3 个 int 的数组” 的大小。

    // a 是int * 类型, 指向第一个元素 a[0]. 
    // 而 &a 是int (*)[6]类型, 指向整个数组（含 3 个 int 的对象）

    // 这里使用(void*)强制转换的原因是: %p 对应参数必须是 void* 类型的指针。


 


    /* 11. 注意事项／Pitfalls */
    // - 中文：数组越界是未定义行为。English: array out‐of‐bounds => undefined behavior.
    // - 中文：数组大小固定（在声明时确定）。English: size fixed once declared.
    // - 中文：当数组被传给函数时，函数不能知道其元素个数（除非额外传入）。English: function can't know array size from just pointer.
    // ⚠️ 下面代码不能运行（演示目的）：
    // printf("%d\n", init3[10]);  // 超越界限，未定义行为

    return 0;
}




/* 函数定义：打印数组元素 */
void printArray(int *a, int size) {
    // 中文：遍历并打印 a[0] 到 a[size-1]。English: iterate and print a[0] to a[size-1].
    printf("printArray: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

