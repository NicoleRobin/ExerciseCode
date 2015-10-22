#! /bin/bash
# Program:
# 	Program creates three files,which named by user's input and date command.
# History:
# 2013/09/19	zjw	First release
echo -e "I will use 'touch' command to create 3 files."
read -p "Please input your filename:" fileuser

# 2. 为了避免使用者随意的按Enter，利用变量功能分析档名是否设定
filename=${fileuser:-"filename"} # 开始判断是否有文件名

# 3. 开始利用date指令来取得所需要的档名了
date1=$(date --date='2days ago' + %Y%m%d) # 前两天的日期
date2=$(date --date='1days ago' + %Y%m%d) # 前一天的日期
date3=$(date + %Y%m%d) # 今天的日期
file1=${filename}${date1}
file2=${filename}${date2}
file3=${filename}${date3}

# 4. 将档名建立吧
touch "$file1"
touch "$file2"
touch "$file3"
