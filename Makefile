.PHONY: clean All

All:
	@echo "----------Building project:[ structures_points - Debug ]----------"
	@cd "structures_points" && "$(MAKE)" -f  "structures_points.mk"
clean:
	@echo "----------Cleaning project:[ structures_points - Debug ]----------"
	@cd "structures_points" && "$(MAKE)" -f  "structures_points.mk" clean
