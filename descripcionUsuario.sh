#!/bin/bash

echo "-----------------------------------------------"
echo -n "El canal fue creado en: "
GET https://channelmeter.com/channels/$(cat usuario.txt) | grep "Created Date" | cut -d '&' -f 4 | cut -d '>' -f 8 | cut -d '<' -f 1
echo " "
echo -n "Total de vídeos subidos: "
GET https://channelmeter.com/channels/$(cat usuario.txt) | grep "Created Date" | cut -d '&' -f 4 | cut -d '<' -f 14 | cut -d '>' -f 2
echo " "
echo -n "Visitas totales en el canal: "
GET https://channelmeter.com/channels/$(cat usuario.txt) | grep "Created Date" | cut -d '&' -f 4 | cut -d '<' -f 20 | cut -d '>' -f 2
echo " "
echo -n "Suscriptores actuales en el canal: "
GET https://channelmeter.com/channels/$(cat usuario.txt) | grep "Created Date" | cut -d '&' -f 4 | cut -d '<' -f 26 | cut -d '>' -f 2
echo " "
echo -n "Fecha del último vídeo subido: "
GET https://channelmeter.com/channels/$(cat usuario.txt) | grep "Created Date" | cut -d '&' -f 4 | cut -d '<' -f 32 | cut -d '>' -f 2
