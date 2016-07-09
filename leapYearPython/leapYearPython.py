startYear = 1950
endYear = 2050

for x in range(startYear,endYear):
	if(x%4 == 0 and x%100 != 0 or x%400 == 0):
		print "El anio "+ str(x) +" es bisiesto"
