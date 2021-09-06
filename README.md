# tedit - **t**iny **edit**or

tedit is a tiny ed-like line editor.

## commands

*a*	-	writes to current line

*ap*	-	appends to current line

*g*	-	prompts for changing line

*w*	-	prompts for file name and saves the file

*q*	-	exits

*s*	-	shows current line

*o*	-	prompts for file name and opens it

## example

this is a transcript of an example tedit session

	$ tedit
	a
	#!/bin/bash
	g
	g?: 1
	a
	for i in $(seq 100)
	g
	g?: 2
	a
	do
	g
	g?: 3
	a
	echo "god i love gaming $i"
	g
	g?: 4
	a
	done
	w
	w?: gaming.sh
	w -> gaming.sh
	q


## limitations

tedit has a limitation of hard-coded maximum number of lines.

it can be easily changed by changing 4096 in `#define MAX_LINES 4096` to anything else,
and recompiling tedit
