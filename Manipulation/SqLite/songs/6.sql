SELECT name FROM songs AS malone_songs
WHERE artist_id = (SELECT id FROM artists WHERE name = 'Post Malone');