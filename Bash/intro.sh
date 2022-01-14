#!/bin/bash
read -p "How many dollars do you have? " money
read -p "What is your credit score? " credit

if (( $money >= 400 )) && (( $credit >= 670 ))
then
	echo "You're approved for the loan!"
else
	echo "You are not approved, keep working on it!"
fi
