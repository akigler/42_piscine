ifconfig | grep "ether" | grep -v "media" | tr -d ' [:blank:]' | sed 's/ether//'
