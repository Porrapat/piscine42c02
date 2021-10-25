hello:
	echo "Hello World"
	find . -regex '.*\.\(c\|cpp\|h\)$\' -print | norminette

