gnuplot -persist <<EOF
set term wxt
plot 'double_consumer.cc.csv'  with line
EOF

sleep 0.1

gnuplot -persist <<EOF
set term wxt
plot 'motion2d_consumer.cc.csv' using 1 with line, '' using 2 with line, '' using 3 with line
EOF

sleep 0.1

gnuplot -persist <<EOF
set xrange [-1:1]
set yrange [-1:1]
set xlabel "Transaltion X"
set ylabel "Transaltion Y"
set zlabel "Transaltion Z"
set grid
splot 'rbs_consumer.cc.csv' using 1:2:3 with line
pause -1
EOF

