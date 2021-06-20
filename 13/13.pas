var n:integer;
var sum:real;
function fac(num:integer):integer;
begin
  if (num = 1) or (num = 0) then result := 1 else result := fac(num-1)*num;   
end;

begin
  read(n);
  for var i:=1 to n do 
  begin
    sum := sum + (i*i)/fac(i-1);
  end;
  write(sum);
end.
