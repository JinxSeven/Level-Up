SELECT movies.title FROM movies
JOIN stars sone ON movies.id = sone.movie_id
JOIN stars stwo ON movies.id = stwo.movie_id
JOIN people pone ON sone.person_id = pone.id
JOIN people ptwo ON stwo.person_id = ptwo.id
WHERE pone.name = 'Bradley Cooper' AND ptwo.name = 'Jennifer Lawrence';