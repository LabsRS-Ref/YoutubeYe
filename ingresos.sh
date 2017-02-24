#!/bin/bash

echo " "
echo -n "Ingresos mensuales estimados del Youtuber $(cat usuario.txt): "
GET http://www.statsheep.com/$(cat usuario.txt) | grep "Estimated Earnings" | head -n 1 | cut -d '<' -f 4 | cut -d '>' -f 2
