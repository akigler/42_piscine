cat /etc/passwd | grep -v "^#" | sed '1d;n' | sed 's/\:\*.*//' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2"p | xargs | sed 's/ /,/g' | sed 's/$/./g'
