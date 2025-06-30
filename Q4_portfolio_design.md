<!-- Task 4: High-Level Design – Real-Time Portfolio System

Scenario:

250 users

Each user has at least one account with assets (stocks or mutual funds)

Users can view real-time portfolio any time

Asset prices come from different external sources

Prices update every 10 minutes

System must be reliable and scalable -->

Key Requirements:

Feature	Purpose
Real-time Portfolio	Show updated values to users
Price Feeds	External sources for price data
Refresh Every 10 mins	Automated periodic updates
Scalable Design	Should handle more users/assets later
Immediate Updates	If price feed updates, portfolios must update

-->High-Level Architecture (Text Diagram):


i create a image of diagram with the help of excalidraw website and attached this image in below link.
https://excalidraw.com/#json=SqzCI5lkmRNK7_xdnV3Nb,RsGmIHI0n9Vk_tgiQm0Hmw
you can easily access it





<!-- Key Technologies (Suggestion):
Component	Tech Stack
Price Fetching	Python Node/Cron + REST APIs
Queue	Kafka / RabbitMQ
Cache	Redis
Database	PostgreSQL or MongoDB
Backend Services	Node.js / Spring Boot
Scheduler	Cron Job (every 10 mins)
Scalability	Docker + Kubernetes (optional for scale) -->