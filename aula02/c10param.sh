msg="Introduza nome do ficheiro: "
echo $msg
read vara


for i in 0{0..9}	
do 
	touch $vara$i.dat
done
