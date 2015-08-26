//Kamus
a , b : integer;

//Algoritma

input(a);
if a = 9999 then
output (0)
else
b <- a
  repeat
    input (a);
      if b > a then 
      b <- a
      else
      b <- b;
  until (a='9999');
output (b);
