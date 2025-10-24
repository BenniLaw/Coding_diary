
#红色行读取网上的excel文件，4M字节，然后处理的案例。
import pandas as pd
import base64
from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad
###################
class Cryptor:
def __init__(self, key):
self.SECRET_KEY = str(key).encode("utf-8")
self.BLOCK_SIZE = 16 # Bytes
self.CIPHER = AES.new(self.SECRET_KEY, AES.MODE_ECB) # never use ECB in strong systems obviously

def encrypt(self, text):
text = str(text).encode("utf-8")
return base64.b64encode(self.CIPHER.encrypt(pad(text, self.BLOCK_SIZE))).decode("utf-8")

def decrypt(self, encoded_text):
self.CIPHER = AES.new(self.SECRET_KEY, AES.MODE_ECB)
return unpad(self.CIPHER.decrypt(base64.b64decode(encoded_text.encode("utf-8"))), self.BLOCK_SIZE).decode("utf-8")

cryptor = Cryptor("cieecieecieeciee")
text = "hello world"
text = cryptor.encrypt(text)
print(text)
print(cryptor.decrypt(text))

df=pd.read_excel(io=r'http://vm.cau.edu.cn/~s03124/logs_20240113-1303.xls',header=2)
#df=pd.read_excel(io=r'logs_20240113-1303.xls',header=2)

print(df.at[1,'用户全名'])
##
df.用户全名=df.apply(lambda x: cryptor.encrypt(x.用户全名),axis=1)
##
print(df.at[1,'用户全名'])
