ldapsearch -LLL "uid=gsamora" -u | sed -n 's/^[ \t]*dn:[ \t]*\(.*\)/\1/p'
