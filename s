#!/bin/bash

search="$1"
shift
args="$@"
case $search in
	so)
		open "https://stackoverflow.com/search?q=$args"
		;;
	wt)
		open "https://en.wiktionary.org/wiki/$args#English"
		;;
	wp)
		open "https://en.wikipedia.org/wiki/$args"
		;;
	az)
		open "https://www.amazon.com/s/field-keywords=$args"
		;;
	oeis)
		open "https://oeis.org/search?q=$args"
		;;
	gh)
		open "https://github.com/search?utf8=✓&ref=simplesearch&q=$args"
		;;
	ddg)
		open "https://duckduckgo.com/?q=$args"
		;;
	sp)
		open "https://open.spotify.com/search/results/$args"
		;;
	wd)
		open "https://wd3.myworkday.com/qbe/d/home.htmld#selectedWorklet=501%24162"
		;;
	jr)
		open "https://qbe-appservices.atlassian.net/secure/RapidBoard.jspa?rapidView=347&projectKey=DI"
		;;
	*)
		echo "unknown search: $search"
		;;
esac
