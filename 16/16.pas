var n,a,sum:integer;

function pow(a,n:integer):integer;
begin
  if n = 1 then result := a else result := pow(a, n-1) * a;
end;
begin
  write('n: ');
  read(n);
  write('a: ');
  read(a);
  for var i := 1 to n do
  begin
    sum := sum + pow(a, i);
  end;
  writeln(sum);
end.