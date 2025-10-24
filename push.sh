#!/bin/bash
# =======================================
#    Auto Git Push Script by Benny
# =======================================

# 自动生成提交信息（包含当前时间）
commit_message="Auto update: $(date '+%Y-%m-%d %H:%M:%S')"

# 添加所有更改
git add .

# 提交更改
git commit -m "$commit_message"

# 推送到远程仓库
git push

# 输出提示
echo "All changes pushed successfully at $(date '+%H:%M:%S')"

