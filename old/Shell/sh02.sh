#! /bin/bash
# Program:
#	User inputs his first name and last name.Program show his full name.
# History:
# 2013/9/19	zjw	First release

read -p "Please input your first name:" firstname # Ask user to input his first name
read -p "Please input your last name:" lastname
echo -e "\nYour full name is:$firstname $lastname"
