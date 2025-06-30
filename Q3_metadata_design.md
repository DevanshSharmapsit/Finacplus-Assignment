 <!-- Task 3: Amazon Metadata Design
 Scenario:
i am working at Amazon. i need to decide:

What metadata i will store in the database for an item like a shirt.

How this metadata will be used.

1. Metadata Fields for a Shirt  -->

{
  "product_id": "SHIRT12345",
  "title": "Men's Slim Fit Casual Shirt",
  "description": "Cotton shirt with full sleeves, suitable for formal and casual wear.",
  "brand": "Peter England",
  "category": "Clothing > Men > Shirts",
  "sizes": ["S", "M", "L", "XL"],
  "colors": ["Blue", "White", "Grey"],
  "material": "100% Cotton",
  "price": 1299,
  "discount_price": 599,
  "currency": "INR",
  "rating": 4.3,
  "review_count": 154,
  "inventory_count": 245,
  "availability": true,
  "created_at": "2025-06-29T08:45:00Z",
  "updated_at": "2025-06-29T12:30:00Z"
}

<!-- 
2. How This Metadata Is Used
Purpose	Description
Search & Filters	Search by brand, material, size, color, price
Price Calculations	Calculate offers, show discounts
Cart & Checkout	Used during purchase
Inventory Management	Auto-hide out-of-stock items
Ratings & Reviews	Display customer satisfaction
Recommendation System	Suggest similar items
Order History / Tracking	Use product_id to fetch in invoices/orders
Analytics & Reports	Which sizes/colors sell most, stock planning 
-->