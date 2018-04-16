set nocompatible
set backspace=indent,eol,start " 使回车键正常处理indent,eol,start
syntax on				" 开启语法高亮
set nu					" 显示行号
set ruler 				" 显示状态栏标尺
" 设置缩进
set autoindent			" 自动缩进
set cindent				" 使用C语言的缩进格式
" 统一缩进为4
set softtabstop=4
set shiftwidth=4

set smarttab 			" 在行和段开始处使用制表符
set expandtab 		" 用空格代替制表符
set tabstop=4 			" 设置tab的宽度为4
colorscheme molokai		" 设置配置方案
set cursorline 			" 突出显示当前行
set noeb				" 去掉输入错误时的提示音
set confirm 			" 在处理未保存或者只读文件时，弹出确认
set history=1000		" 设置历史记录行数
" 禁止生成临时文件
set nobackup
set noswapfile

set ignorecase 			" 搜索忽略大小写
" 编码设置
set enc=utf-8
set fencs=utf-8,ucs-bom,shift-jis,gb18030,gbk,gb2312,cp936

set laststatus=2 		" 总是显示状态栏
filetype on 			" 开启文件类型侦测
set showmatch 			" 高亮匹配的括号
set matchtime=1			" 匹配括号高亮时间（单位是十分之一秒）
set hlsearch        " 设置查找高亮
set pastetoggle=<F10> " 设置切换粘贴模式快捷键 set paste/nopaste

" set list : 显示空白格
" ctrl+s ：锁屏 ctrl+q 解锁

" 移动操作
" w/e/b/ge ：分别是跳转到下一个单词的开头、末尾、上一个单词的开头、末尾，前面可以加数字表示执行几次操作
" ctrl+f/b ：向前/后一页
" ctrl+d/u ：向前/后半页
" ctrl+e/y ：向前/后一行
" $/0/^/g_ ：分别是移动到行的末尾、开头、第一个非空白符、最后一个非空白符
" f + 字符 ：移动到行内当前光标后面的第一个这个字符
" t + 字符 ：移动到行内当前光标后的第一个这个字符的前一个位置
" F + 字符 ：为 f + 字符的反向
" T + 字符 ：为 t + 字符的反向
" 以上4个命令也可以接受数字，表示执行几次操作
" % ：找到括号

" =========================键映射==============================================
" 缩进
nmap <tab> V>
" nmap <s-tab> V<
" 窗口跳转 
map <C-H> <C-W>h
map <C-J> <C-W>j
map <C-K> <C-W>k
map <C-L> <C-W>l
" 全选
nnoremap <c-a> ggVG
