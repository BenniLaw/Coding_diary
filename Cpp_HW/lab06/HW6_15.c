# include <stdio.h>
double get_means(int *nums, int length) {
    double sum = 0;
    for (int i = 0; i < length; i++) {
        sum += nums[i];
    }
    return sum / 10;
}

int get_max(int *nums, int length) {
    int max_index = 0;
    for (int i = 0; i < length; i++) {
        if (nums[i] > nums[max_index]) {
            max_index = i;
        }
    }
    return nums[max_index];
}

int main(){
    int nums[10] = {0};
    for (int i = 0; i < 10; i++) {
        scanf("%d ", &nums[i]);
    }

    double means = get_means(nums, 10);
    int count = 0;
    for (int j = 0; j < 10; j++) {
        if (nums[j] > means) {
            count++;
        }
    }

    printf("%d\n%d", count, get_max(nums, 10));

    return 0;
}