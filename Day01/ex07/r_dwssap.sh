cat /etc/passwd | cut -d '#' -f 1 | grep -v '^$' | cut -d ':' -f 1 | rev | sed -n '2,${p;n;}' | sort -r | sed -n "$FT_LINE1","$FT_LINE2"p | tr "\n" "," |sed 's/,/, /g' | rev | sed 's/,/./' | rev
