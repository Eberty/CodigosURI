select name, CAST((EXTRACT(DAY FROM payday)) AS int) as day from loan;
