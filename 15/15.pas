var fib1,fib2,buffer: integer;
var bufferlink:^integer;
begin
  fib2 := 1;
  bufferlink := @buffer;
  for var i:=0 to 9 do
  begin
    if i > 1 then
    begin
      bufferlink^ := fib1 + fib2;
      fib1 := fib2;
      fib2 := bufferlink^;
      write(bufferlink^, ' ');
    end
    else
      write(i, ' ');
  end;
end.