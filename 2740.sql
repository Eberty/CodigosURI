(select 'Podium: ' || l1.team as name 
  FROM league l1
  limit 3)
union all
(select * from (
  select 'Demoted: ' || team as name
    FROM league
    order by position desc
    limit 2
    ) demoted
order by 1);
