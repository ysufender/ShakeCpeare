#include "shakecpeare.h"

there is the named concept Employee
with the body
character reference that is the name
also the numeric salary
also the concept Employee that is a reference of a reference
which is subordinates
oh also the numeric sub_count
at the finale end the block of the Employee please

the numeric totalSalary function takes an Employee reference e
now finally define the body
if e equals NULL then produce 0 please
end that block now
the numeric total should be assigned to e field salary at once
where the numeric i is initially assigned to 0
also the i is less than e field sub_count
at the finale increment i
then total is rebound to the call totalSalary
which takes e field subordinates index i taken
now calculate that please
the block should end now
produce total at once
now end the initial block too

procedure printHierarchy is the function that takes Employee reference e
alongside a numeric level
finally begin the block
if not e then produce nothing at once
end that block too
where the numeric i is initially assigned to 0
also that i is less than level
at the finale increment i
finally print " " here
now call the printf function that takes "%s\n" alongside the e field name
calculate that please
where the numeric i is initially assigned to 0 again
also that the i is less than e field sub_count this time
at finale increment i again
then call the function printHierarchy
which takes an e field subordinates index i taken
alongside the level plus 1
calculate that too please
that block should end now
oh the initial block should end too

the status main is an action with the body
there is an Employee dev1 that is known as the body
"Alice" alongside 50000 alongside NULL alongside 0
end that block now please
there is also another Employee dev2 that is known as the body
"Bob" alongside 55000 alongside NULL alongside 0
end that block too please
oh there is another Employee too
which is the manager that is known as the body
"Carol" alongside 90000
alongside the ( Employee reference series ) body
with the address of dev1
alongside the address of dev2
with that end of the block
oh alongside 2 too
end that block too please
now call the printHierarchy function
that takes the address of the manager alongside a 0
finally also call printf that takes
"Total salary: %d\n" alongside the call totalSalary
which takes the address of the manager
finally calculate that please
now produce okay at once
the program block should end now
