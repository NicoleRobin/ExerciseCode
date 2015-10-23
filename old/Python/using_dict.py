#! /usr/bin/python
# Filename:using_dict.py
# 'ab' is short for 'a'ddress'b'ook

ab = 	{	
	'Swaroop'   :'swaroop@byteofpython.info',
	'Larry'     :'larry@wall.org',
	'Matsumoto' :'matz@ruby-lang.org',
	'Spammer'   :'spammer@hotmail.com',
	}
print "Swaroop's address is %s" %ab['Swaroop']

# Adding a key/value pair
ab['Guido'] = 'guido@python.org'

# Deleting a key/value pair
del ab['Spammer']

print '\nThere are %d contract in the address-book\n'
for name, address in ab.items():
	print 'Connetc %s at %s' %(name, address)
if 'Guido' in ab: # OR ab.has_key('Guido')
	print "\nGuido's address is %s" %ab['Guido']
