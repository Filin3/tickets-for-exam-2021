var M,N:integer;
var sym:string;
begin
  write('N: ');
  read(N);
  write('M: ');
  read(M);
  for var x:=1 to N do
  begin
    sym := sym + '#';
  end;
  for var y:=1 to M do
  begin
    writeln(sym);
  end;
end.