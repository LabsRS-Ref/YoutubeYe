#!/bin/bash

echo -n "Introduzca URL del vídeo en cuestión: "
read url
echo " "
echo -n "Análisis del vídeo: "
GET $url | grep "eow-title" | cut -d '=' -f 5 | cut -d '"' -f 2

while (true)
  do
    echo "----------------------------------------------------------"
    echo -n "Visualizaciones del vídeo: "
    GET $url | grep "visualizaciones" | head -n 1 | cut -d '<' -f 8 | cut -d '>' -f 2
    echo " "
    echo -n "Me gusta: "
    GET $url | grep "Me gusta en este" | cut -d '=' -f 5 | head -n 1 | cut -d ' ' -f 12
    echo " "
    echo -n "No me gusta: "
    GET $url | grep "No me gusta en este" | cut -d '=' -f 5 | head -n 1 | cut -d ' ' -f 13
done
