#!/bin/bash

ls -lt $1 | awk '3!=$4{print $9" "$5};{sum+=$5} END {print "Total bytes " sum}' >> filesize.dat

echo "filesize.dat has been outputted"
