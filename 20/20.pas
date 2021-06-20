var one,two,three:integer;

function factor(n:integer): integer;
begin
  if n = 0 then result := 1 else result := factor(n - 1) * n;
end;

begin
  for var i := 100 to 999 do
  begin
    one := i div 100;
    two := i mod 100 div 10;
    three := i mod 100 mod 10;
    if (factor(one) + factor(two) + factor(three) = i) then
    begin
      writeln(i);
    end;
  end;
end.