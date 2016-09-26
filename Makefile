.PHONY: clean All

All:
	@echo "----------Building project:[ LR4 - Debug ]----------"
	@cd "LR4" && "$(MAKE)" -f  "LR4.mk"
clean:
	@echo "----------Cleaning project:[ LR4 - Debug ]----------"
	@cd "LR4" && "$(MAKE)" -f  "LR4.mk" clean
