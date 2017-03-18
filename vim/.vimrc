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
set noexpandtab 		" 不要用空格代替制表符
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

" 设置查找高亮
set hlsearch
