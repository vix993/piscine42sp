#!/bin/sh
cat /etc/passwd | grep -v -e "#" | awk "NR%2==0" | cut -d':' -f1 | rev | rev | sort -rn | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | sed 's/ /, /g' | tr '\n' .
