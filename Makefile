.PHONY: clean All

All:
	@echo "----------Building project:[ Maps - Debug ]----------"
	@cd "OOP\Lab_Maps_c++" && "$(MAKE)" -f  "Maps.mk"
clean:
	@echo "----------Cleaning project:[ Maps - Debug ]----------"
	@cd "OOP\Lab_Maps_c++" && "$(MAKE)" -f  "Maps.mk" clean
