echo "enter two numbers";
read a b;

echo "a=$a";
echo "b=$b";

compare()
{

	if [ $a -eq $b ];
	then
    		echo "a equal b";
	else	
		if [ $a -gt $b ];
		then
    			echo "$a";
		else
			echo "$b";
		fi
	fi
	return 0
}
compare
