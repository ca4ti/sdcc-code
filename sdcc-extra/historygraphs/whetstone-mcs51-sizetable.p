set output "whetstone-mcs51-size.svg"
set terminal svg size 640,480
set style data lines
set xlabel "revision"
set ylabel "size [B]"
set arrow from 9618, 19980 to 9618, 19930
set label "3.6.0" at 9618, 19980
set arrow from 10233, 20094 to 10233, 20044
set label "3.7.0" at 10233, 20094
set arrow from 10582, 19566 to 10582, 19516
set label "3.8.0" at 10582, 19566
set arrow from 11214, 20257 to 11214, 20207
set label "3.9.0" at 11214, 20257
set arrow from 11533, 20251 to 11533, 20201
set label "4.0.0" at 11533, 20251
set arrow from 12085, 20272 to 12085, 20222
set label "4.1.0" at 12085, 20272
plot "whetstone-mcs51-sizetable" using 1:4 title "default", "whetstone-mcs51-sizetable" using 1:2 title "size", "whetstone-mcs51-sizetable" using 1:3 title "speed"
