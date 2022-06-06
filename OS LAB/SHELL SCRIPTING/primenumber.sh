echo "enter number"
read num
i=2
while test $i -lt $num
do
k=`expr $num / $i`
if test $k -eq 0 
then
echo "COMPOSITE NUMBER"
exit
fi
i=`expr $i + 1`
done
echo "PRIME NUMBER"
