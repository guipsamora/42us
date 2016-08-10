ldapsearch -LLL "cn=*bon*" | grep "cn:" | wc -l | tr -d " "
