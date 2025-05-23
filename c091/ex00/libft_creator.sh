#!/bin/bash

# ソースファイルをコンパイルしてオブジェクトファイルを生成
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

# 生成されたオブジェクトファイルをライブラリに結合
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# 不要なオブジェクトファイルを削除
rm -f ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
