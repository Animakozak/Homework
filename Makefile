.PHONY: clean All

All:
	@echo "----------Building project:[ Lab_Collections - Debug ]----------"
	@cd "OOP\Lab_Collections" && "$(MAKE)" -f  "Lab_Collections.mk"
clean:
	@echo "----------Cleaning project:[ Lab_Collections - Debug ]----------"
	@cd "OOP\Lab_Collections" && "$(MAKE)" -f  "Lab_Collections.mk" clean
