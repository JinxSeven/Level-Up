SELECT (SELECT SUM(energy) FROM songs WHERE artist_id = (SELECT id FROM artists WHERE name = 'Drake')) 
/ (SELECT COUNT(name) FROM songs WHERE artist_id = (SELECT id FROM artists WHERE name = 'Drake'))
AS avg_drake_energy;