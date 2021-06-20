var arr: array[1..6] of array[1..2] of real;
var count:integer;
begin
  for var i := 1 to 6 do 
  begin
    for var j := 1 to 2 do
    begin
      write(i,'|',j,': ');
      read(arr[i][j]);
      if arr[i][j] > 0 then count := count + 1;
    end;
  end;
  for var i := 1 to 6 do
  begin
    for var j := 1 to 2 do 
    begin
      write(arr[i][j], ' ');
    end;
    writeln();
  end;
  writeln(count);
end.