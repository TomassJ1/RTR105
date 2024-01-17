#!/usr/bin/gnuplot -persist

set terminal png
set output "histogram.png"
set style data histogram 
set style fill solid
set yrange[0:]
set title "Burtu atkārtošanās biežums"
set key off
set xlabel "Burti"
set ylabel "Reizes"
plot 'statistics.dat' using 2:xtic(1)



