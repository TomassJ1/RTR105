#!/usr/bin/gnuplot -persist

set title "Grafiks sin(x)"
show title
set axes x1y1
set x1range [pi : pi]
set x1range [-1.5 : 1.5]






plot[0:2*pi] sin(x)
