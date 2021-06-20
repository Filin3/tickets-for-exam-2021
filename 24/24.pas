var sum:real;
var n:integer;

function factor(n:integer):integer;
begin
  if n = 0 then result := 1 else result := factor(n - 1) * n; 
end;

function mathSum(i:integer):real;
begin
  if i = 1 then
  begin
    result := (i*i)/factor(i-1)
  end
  else
  begin
    result := mathSum(i-1) + (i*i)/factor(i-1);
  end;
end;

begin
  read(n);
  writeln(mathSum(n));
end.