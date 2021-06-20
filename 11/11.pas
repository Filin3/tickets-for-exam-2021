var number:integer;
begin
  read(number);
  for var i:=1 to Abs(number) do
  begin
    if (number mod i = 0) then 
    begin
      writeln(i); 
    end;
  end;
end.