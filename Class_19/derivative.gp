#!/usr/bin/gnuplot --persist
set terminal pngcairo  transparent enhanced font "arial,10" fontscale 1.0 size 600, 400 
set output 'derivative.png'

set grid

#plot [-5:1] (1+x)*exp tile "f(x)"
#replot [-5:1] exp(x)*(2+x) title "f'(x)"
#replot "derivative.dat" every ::1 using 1:2 with lines title "sin(x) (from file)",
#replot "derivative.dat" every ::1 using 1:3 with lines title "sin'(x) (finite difference)"

plot [-5:1] (1+x)*exp(x) title "f(x)", \
              (2+x)*exp(x) title "f'(x)", \
              "derivative.dat" every ::1 using 1:2 with lines title "sin(x) (from file)", \
              "derivative.dat" every ::1 using 1:3 with lines title "sin'(x) (finite difference)"
