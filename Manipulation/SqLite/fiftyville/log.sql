-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT description FROM crime_scene_reports
WHERE street = 'Humphrey Street';
-- Iam able to get the following details
-- 10:15am @ Humphrey Street bakery witness:3
SELECT activity, license_plate
FROM bakery_security_logs
WHERE year = 2023 AND month = 7
AND day = 28 AND hour = 10
AND minute > 5 AND minute < 20;

